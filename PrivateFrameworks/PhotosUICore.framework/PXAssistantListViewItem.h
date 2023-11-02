
@interface PXAssistantListViewItem : NSObject {
    NSString * _detail;
    bool  _enabled;
    id  _representedObject;
    bool  _selected;
    NSString * _subtitle;
    NSString * _systemImageName;
    long long  _tag;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *detail;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) id representedObject;
@property (nonatomic, readonly) bool selected;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly) long long tag;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

+ (id)itemWithTag:(long long)arg1 title:(id)arg2 enabled:(bool)arg3;
+ (id)itemWithTitle:(id)arg1;
+ (id)navigationItemWithTag:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 enabled:(bool)arg4;
+ (id)ruleItemWithTag:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 detail:(id)arg4 systemImageName:(id)arg5 enabled:(bool)arg6;
+ (id)selectionItemWithTag:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 selected:(bool)arg4 enabled:(bool)arg5;

- (void).cxx_destruct;
- (id)detail;
- (bool)enabled;
- (id)init;
- (id)initWithType:(long long)arg1 tag:(long long)arg2 representedObject:(id)arg3 title:(id)arg4 subtitle:(id)arg5 detail:(id)arg6 systemImageName:(id)arg7 selected:(bool)arg8 enabled:(bool)arg9;
- (id)representedObject;
- (bool)selected;
- (id)subtitle;
- (id)systemImageName;
- (long long)tag;
- (id)title;
- (long long)type;

@end
