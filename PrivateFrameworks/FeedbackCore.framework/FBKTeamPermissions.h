
@interface FBKTeamPermissions : NSObject <NSSecureCoding> {
    bool  _canAssign;
    bool  _canClose;
    bool  _canDemote;
    bool  _canDownload;
    bool  _canRespond;
    bool  _canView;
}

@property (nonatomic, readonly) bool canAssign;
@property (nonatomic, readonly) bool canClose;
@property (nonatomic, readonly) bool canDemote;
@property (nonatomic, readonly) bool canDownload;
@property (nonatomic, readonly) bool canRespond;
@property (nonatomic, readonly) bool canView;

+ (id)personalTeamPermissions;
+ (bool)supportsSecureCoding;

- (bool)canAssign;
- (bool)canClose;
- (bool)canDemote;
- (bool)canDownload;
- (bool)canRespond;
- (bool)canView;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithView:(bool)arg1 respond:(bool)arg2 close:(bool)arg3 download:(bool)arg4 assign:(bool)arg5 demote:(bool)arg6;

@end
