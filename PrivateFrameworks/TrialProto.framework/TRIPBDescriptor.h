
@interface TRIPBDescriptor : NSObject <NSCopying> {
    unsigned int  extensionRangesCount_;
    const struct TRIPBExtensionRange { unsigned int x1; unsigned int x2; } * extensionRanges_;
    NSArray * fields_;
    TRIPBFileDescriptor * file_;
    Class  messageClass_;
    NSArray * oneofs_;
    unsigned int  storageSize_;
    bool  wireFormat_;
}

@property (readonly) TRIPBDescriptor *containingType;
@property (nonatomic, readonly) const struct TRIPBExtensionRange { unsigned int x1; unsigned int x2; }*extensionRanges;
@property (nonatomic, readonly) unsigned int extensionRangesCount;
@property (nonatomic, readonly) NSArray *fields;
@property (nonatomic, readonly) TRIPBFileDescriptor *file;
@property (readonly) NSString *fullName;
@property (nonatomic, readonly) Class messageClass;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSArray *oneofs;
@property (getter=isWireFormat, nonatomic, readonly) bool wireFormat;

+ (id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 file:(id)arg3 fields:(void*)arg4 fieldCount:(unsigned int)arg5 storageSize:(unsigned int)arg6 flags:(unsigned int)arg7;

- (id)containingType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (const struct TRIPBExtensionRange { unsigned int x1; unsigned int x2; }*)extensionRanges;
- (unsigned int)extensionRangesCount;
- (id)fieldWithName:(id)arg1;
- (id)fieldWithNumber:(unsigned int)arg1;
- (id)fields;
- (id)file;
- (id)fullName;
- (id)initWithClass:(Class)arg1 file:(id)arg2 fields:(id)arg3 storageSize:(unsigned int)arg4 wireFormat:(bool)arg5;
- (bool)isWireFormat;
- (Class)messageClass;
- (id)name;
- (id)oneofWithName:(id)arg1;
- (id)oneofs;
- (void)setupContainingMessageClassName:(const char *)arg1;
- (void)setupExtensionRanges:(const struct TRIPBExtensionRange { unsigned int x1; unsigned int x2; }*)arg1 count:(int)arg2;
- (void)setupExtraTextInfo:(const char *)arg1;
- (void)setupMessageClassNameSuffix:(id)arg1;
- (void)setupOneofs:(const char **)arg1 count:(unsigned int)arg2 firstHasIndex:(int)arg3;

@end
