
@interface WFWidgetOptions : NSObject {
    NSNumber * _cornerRadius;
    long long  _family;
    INIntent * _intent;
}

@property (nonatomic, retain) NSNumber *cornerRadius;
@property (nonatomic) long long family;
@property (nonatomic, copy) INIntent *intent;

- (void).cxx_destruct;
- (id)cornerRadius;
- (long long)family;
- (id)intent;
- (void)setCornerRadius:(id)arg1;
- (void)setFamily:(long long)arg1;
- (void)setIntent:(id)arg1;

@end
