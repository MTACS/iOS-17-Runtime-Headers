
@interface PLResourceXPCRequest : NSObject <NSSecureCoding> {
    NSURL * _assetObjectIDURL;
    NSString * _taskIdentifier;
    bool  _wantsProgress;
}

@property (nonatomic, readonly) NSURL *assetObjectIDURL;
@property (nonatomic, readonly) NSString *taskIdentifier;
@property (nonatomic) bool wantsProgress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetObjectIDURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectIDURL:(id)arg2;
- (void)setWantsProgress:(bool)arg1;
- (id)taskIdentifier;
- (bool)wantsProgress;

@end
