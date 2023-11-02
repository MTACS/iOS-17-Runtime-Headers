
@interface TRIPBFileDescriptor : NSObject {
    NSString * objcPrefix_;
    NSString * package_;
    unsigned char  syntax_;
}

@property (nonatomic, readonly, copy) NSString *objcPrefix;
@property (nonatomic, readonly, copy) NSString *package;
@property (nonatomic, readonly) unsigned char syntax;

- (void)dealloc;
- (id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3;
- (id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2;
- (id)objcPrefix;
- (id)package;
- (unsigned char)syntax;

@end
