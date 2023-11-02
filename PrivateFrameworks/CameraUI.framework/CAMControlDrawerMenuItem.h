
@interface CAMControlDrawerMenuItem : NSObject {
    NSString * _selectedTitle;
    NSString * _title;
    NSNumber * _value;
}

@property (nonatomic, readonly, copy) NSString *selectedTitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSNumber *value;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 selectedTitle:(id)arg2 value:(id)arg3;
- (id)initWithTitle:(id)arg1 value:(id)arg2;
- (id)selectedTitle;
- (id)title;
- (id)value;

@end
