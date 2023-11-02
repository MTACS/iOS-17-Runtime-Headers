
@interface MPAVRoutingViewItem : NSObject <NSObject> {
    NSString * _actionIdentifier;
    bool  _enabled;
    bool  _expanded;
    UIImage * _image;
    MPAVRoute * _leader;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    NSArray * _routes;
    long long  _type;
    NSString * _vendorSpecificCustomRowIdentifier;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enabled;
@property (getter=isExpandable, nonatomic, readonly) bool expandable;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) MPAVRoute *leader;
@property (nonatomic, readonly, copy) NSString *localizedSubtitle;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) MPAVRoute *mainRoute;
@property (nonatomic, readonly) unsigned long long nestedLevel;
@property (getter=isPickable, nonatomic, readonly) bool pickable;
@property (nonatomic, readonly) NSArray *routes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *vendorSpecificCustomRowIdentifier;

+ (id)itemWithActionTitle:(id)arg1 subtitle:(id)arg2 enabled:(bool)arg3 identifier:(id)arg4 image:(id)arg5;
+ (id)itemWithLeader:(id)arg1 members:(id)arg2;
+ (id)itemWithRoute:(id)arg1;
+ (id)itemWithVendorSpecificCustomRowTitle:(id)arg1 icon:(id)arg2 identifier:(id)arg3;
+ (id)itemWithVendorSpecificLeader:(id)arg1 members:(id)arg2;
+ (id)itemWithVendorSpecificRoute:(id)arg1;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)actionIdentifier;
- (bool)enabled;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isPickable;
- (id)leader;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)mainRoute;
- (unsigned long long)nestedLevel;
- (id)routes;
- (void)setExpanded:(bool)arg1;
- (long long)type;
- (id)vendorSpecificCustomRowIdentifier;

@end
