
@interface COCluster : NSObject <NSCopying, NSSecureCoding> {
    COClusterConfiguration * _configuration;
    NSString * _format;
    NSString * _identifier;
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _updateHandler;
    bool  _updateHandlerInvoked;
}

@property (nonatomic, readonly) COClusterConfiguration *configuration;
@property (nonatomic, readonly, copy) NSString *format;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;
@property (nonatomic, readonly) bool updateHandlerInvoked;

+ (id)_allowedClusterClasses;
+ (id)_clusterForCluster:(id)arg1;
+ (id)_createTemplateFromConfiguration:(id)arg1;
+ (id)_homeClusterForHomeKitHomeIdentifier:(id)arg1;
+ (id)activityGroupCluster;
+ (id)clusterNameWithHomeKitHome:(id)arg1;
+ (id)clusterWithConfiguration:(id)arg1;
+ (id)dynamicGroupCluster;
+ (id)homeCluster;
+ (id)homeClusterForHomeKitHome:(id)arg1;
+ (id)homeClusterForHomeKitHomeUniqueIdentifier:(id)arg1;
+ (id)inferClusterLabelFromCluster:(id)arg1;
+ (id)pairCluster;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleRealmUpdate:(id)arg1;
- (id)_initWithConfiguration:(id)arg1 format:(id)arg2 label:(id)arg3;
- (void)_invokeUpdateHandler;
- (bool)_isEqualToCluster:(id)arg1;
- (void)_updateIdentifier;
- (void)_withLock:(id /* block */)arg1;
- (void)activate:(id /* block */)arg1;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id /* block */)updateHandler;
- (bool)updateHandlerInvoked;

@end
