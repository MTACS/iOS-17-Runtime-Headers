
@protocol INIntentSlotComposing <NSObject>

@required

- (NSArray *)intentSlotDescriptions;
- (NSString *)localizeValueOfSlotDescription:(INIntentSlotDescription *)arg1 withLocalizer:(INStringLocalizer *)arg2;

@end
