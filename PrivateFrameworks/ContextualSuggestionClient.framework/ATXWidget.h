
@interface ATXWidget : NSObject <NSSecureCoding> {
    CHSWidget * _chsWidget;
    NSDictionary * _dictionaryRepresentation;
    NSString * _identifier;
    NSString * _source;
    bool  _suggestedWidget;
}

@property (nonatomic, readonly) CHSWidget *chsWidget;
@property (nonatomic, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *source;
@property (getter=isSuggestedWidget, nonatomic, readonly) bool suggestedWidget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chsWidget;
- (id)copyWithSource:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 chsWidget:(id)arg2 suggestedWidget:(bool)arg3;
- (id)initWithIdentifier:(id)arg1 chsWidget:(id)arg2 suggestedWidget:(bool)arg3 source:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXWidget:(id)arg1;
- (bool)isSuggestedWidget;
- (void)setDictionaryRepresentation:(id)arg1;
- (id)source;

@end
