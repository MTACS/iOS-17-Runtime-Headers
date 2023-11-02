
@interface WBSStartPageCustomizationItem : NSObject {
    bool  _enabled;
    UIImage * _icon;
    id  _identifier;
    NSString * _title;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)itemWithIdentifier:(id)arg1 enabled:(bool)arg2;
+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 icon:(id)arg3 enabled:(bool)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)icon;
- (id)identifier;
- (bool)isEnabled;
- (id)itemWithEnabled:(bool)arg1;
- (id)title;

@end
