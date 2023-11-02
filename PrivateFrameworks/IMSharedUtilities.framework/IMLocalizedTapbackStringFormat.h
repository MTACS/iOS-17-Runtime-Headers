
@interface IMLocalizedTapbackStringFormat : NSObject {
    NSString * _localizedFormatString;
    long long  _localizedStringFormatType;
}

@property (nonatomic, readonly, copy) NSString *localizedFormatString;
@property (nonatomic, readonly) long long localizedStringFormatType;

- (void).cxx_destruct;
- (id)initWithLocalizedStringFormatType:(long long)arg1 unlocalizedFormatString:(id)arg2;
- (id)localizedFormatString;
- (long long)localizedStringFormatType;

@end
