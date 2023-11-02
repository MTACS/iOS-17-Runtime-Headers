
@interface PRPosterSceneAttachment : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    unsigned int  _contextId;
    long long  _level;
    unsigned long long  _renderId;
}

@property (nonatomic, readonly) unsigned int contextId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) unsigned long long renderId;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (unsigned int)contextId;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextId:(unsigned int)arg1 renderId:(unsigned long long)arg2 level:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)level;
- (unsigned long long)renderId;

@end
