
@interface PKPaymentSetupMoreInfoItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _alternativeAction;
    NSString * _alternativeActionOverride;
    NSString * _body;
    NSString * _doneAction;
    NSString * _doneActionOverride;
    bool  _hasAlternativeAction;
    bool  _hideAlternativeAction;
    NSData * _imageData;
    NSURL * _imageURL;
    NSString * _linkText;
    NSURL * _linkURL;
    NSString * _nextAction;
    NSString * _nextActionOverride;
    NSDictionary * _reportingMetadata;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *alternativeAction;
@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *doneAction;
@property (nonatomic, readonly) bool hasAlternativeAction;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly, copy) NSString *linkText;
@property (nonatomic, readonly, copy) NSURL *linkURL;
@property (nonatomic, readonly, copy) NSString *nextAction;
@property (nonatomic, readonly, copy) NSDictionary *reportingMetadata;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateActionStrings;
- (id)alternativeAction;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)doneAction;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlternativeAction;
- (id)imageData;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithMoreInfoDictionary:(id)arg1;
- (id)initWithMoreInfoDictionary:(id)arg1 imageData:(id)arg2;
- (id)linkText;
- (id)linkURL;
- (id)nextAction;
- (id)reportingMetadata;
- (void)setImageData:(id)arg1;
- (id)title;
- (long long)type;

@end
