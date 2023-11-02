
@interface ATXComplicationsSuggestion : NSObject <NSSecureCoding> {
    NSArray * _complications;
    long long  _layoutType;
    ATXComplication * _subtitleComplication;
}

@property (nonatomic, readonly, copy) NSArray *complications;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, readonly, copy) ATXComplication *subtitleComplication;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complications;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubtitleComplication:(id)arg1 layoutType:(long long)arg2 complications:(id)arg3;
- (long long)layoutType;
- (id)subtitleComplication;

@end
