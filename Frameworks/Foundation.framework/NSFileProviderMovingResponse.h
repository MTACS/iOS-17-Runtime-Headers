
@interface NSFileProviderMovingResponse : NSObject <NSSecureCoding> {
    bool  _requiresAccessorBlockMaterializationPolicy;
    bool  _requiresProviding;
    unsigned long long  _syncRootID;
}

@property bool requiresAccessorBlockMaterializationPolicy;
@property (readonly) bool requiresProviding;
@property (readonly) NSNumber *syncRootID;

+ (id)providingNotRequiredResponseWithSyncRootID:(unsigned long long)arg1;
+ (id)providingRequiredResponse;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)requiresAccessorBlockMaterializationPolicy;
- (bool)requiresProviding;
- (void)setRequiresAccessorBlockMaterializationPolicy:(bool)arg1;
- (id)syncRootID;

@end
