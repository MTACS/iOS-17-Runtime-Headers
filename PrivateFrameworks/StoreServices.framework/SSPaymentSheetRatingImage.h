
@interface SSPaymentSheetRatingImage : NSObject <NSCopying> {
    struct CGImage { } * _image;
    long long  _ratingType;
    NSString * _urlString;
    NSString * _value;
}

@property (readonly) long long ratingType;
@property (readonly) bool tint;
@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSString *value;

- (void).cxx_destruct;
- (long long)_ratingTypeForType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isServerSupplied;
- (id)localAssetName;
- (long long)ratingType;
- (bool)tint;
- (id)urlString;
- (id)value;

@end
