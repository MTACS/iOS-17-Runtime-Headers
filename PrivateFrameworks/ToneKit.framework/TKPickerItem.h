
@interface TKPickerItem : NSObject {
    long long  _section;
}

@property (setter=_setSection:, nonatomic) long long section;

- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withBoolValue:(bool)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withIntegerValue:(long long)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withStringValue:(id)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setSection:(long long)arg1;
- (id)description;
- (long long)section;

@end
