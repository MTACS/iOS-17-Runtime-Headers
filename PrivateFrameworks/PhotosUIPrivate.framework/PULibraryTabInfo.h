
@interface PULibraryTabInfo : NSObject {
    int  _contentMode;
    NSString * _iconName;
    NSString * _labelKey;
}

@property (nonatomic, readonly) int contentMode;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *labelKey;

+ (id)tabInfoWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3;

- (void).cxx_destruct;
- (int)contentMode;
- (id)iconName;
- (id)initWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3;
- (id)labelKey;

@end
