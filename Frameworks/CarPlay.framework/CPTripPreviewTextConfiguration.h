
@interface CPTripPreviewTextConfiguration : NSObject <NSSecureCoding> {
    NSString * _additionalRoutesButtonTitle;
    NSString * _overviewButtonTitle;
    NSString * _startButtonTitle;
}

@property (nonatomic, readonly, copy) NSString *additionalRoutesButtonTitle;
@property (nonatomic, readonly, copy) NSString *overviewButtonTitle;
@property (nonatomic, readonly, copy) NSString *startButtonTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalRoutesButtonTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartButtonTitle:(id)arg1 additionalRoutesButtonTitle:(id)arg2 overviewButtonTitle:(id)arg3;
- (id)overviewButtonTitle;
- (id)startButtonTitle;

@end
