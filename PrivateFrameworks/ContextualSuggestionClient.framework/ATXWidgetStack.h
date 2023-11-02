
@interface ATXWidgetStack : NSObject <NSSecureCoding> {
    bool  _allowsNewWidget;
    bool  _allowsSmartRotate;
    NSDictionary * _dictionaryRepresentation;
    long long  _family;
    NSString * _identifier;
    NSString * _topWidgetIdentifier;
    NSArray * _widgets;
}

@property (nonatomic, readonly) bool allowsNewWidget;
@property (nonatomic, readonly) bool allowsSmartRotate;
@property (nonatomic, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *topWidgetIdentifier;
@property (nonatomic, readonly, copy) NSArray *widgets;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsNewWidget;
- (bool)allowsSmartRotate;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 widgets:(id)arg2 family:(long long)arg3 allowsNewWidget:(bool)arg4 allowsSmartRotate:(bool)arg5;
- (id)initWithIdentifier:(id)arg1 widgets:(id)arg2 topWidgetIdentifier:(id)arg3 family:(long long)arg4 allowsNewWidget:(bool)arg5 allowsSmartRotate:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXWidgetStack:(id)arg1;
- (void)setDictionaryRepresentation:(id)arg1;
- (void)setTopWidgetIdentifier:(id)arg1;
- (id)topWidgetIdentifier;
- (id)widgets;

@end
