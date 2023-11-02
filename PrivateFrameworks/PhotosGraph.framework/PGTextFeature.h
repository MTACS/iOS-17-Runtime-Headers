
@interface PGTextFeature : NSObject {
    unsigned long long  _origin;
    NSString * _originalString;
    NSString * _string;
    unsigned long long  _type;
    double  _weight;
}

@property (nonatomic, readonly) unsigned long long origin;
@property (nonatomic, readonly) NSString *originalString;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) double weight;

+ (id)_localizedNameForLocalizableNode:(id)arg1;
+ (unsigned long long)_mostImportantTextFeatureTypeAmongTypes:(id)arg1;
+ (id)_stringToIndexFromTokens:(id)arg1;
+ (id)_tokensFromString:(id)arg1 lemmatize:(bool)arg2;
+ (id)graphNamesForNode:(id)arg1 locationHelper:(id)arg2;
+ (id)mergedTextFeatureFromTextFeatures:(id)arg1;
+ (id)stringForFeatureOrigin:(unsigned long long)arg1;
+ (id)stringForFeatureType:(unsigned long long)arg1;
+ (id)textFeaturesFromNode:(id)arg1 type:(unsigned long long)arg2 weight:(double)arg3 options:(unsigned long long)arg4 locationHelper:(id)arg5;
+ (id)textFeaturesFromString:(id)arg1 synonyms:(id)arg2 type:(unsigned long long)arg3 weight:(double)arg4 options:(unsigned long long)arg5;
+ (id)textFeaturesFromString:(id)arg1 type:(unsigned long long)arg2 weight:(double)arg3 options:(unsigned long long)arg4;
+ (id)vipTextFeatureTypes;

- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)arg1 originalString:(id)arg2 type:(unsigned long long)arg3 weight:(double)arg4 origin:(unsigned long long)arg5;
- (void)markAsStrippedOut;
- (unsigned long long)origin;
- (id)originalString;
- (id)string;
- (unsigned long long)type;
- (double)weight;

@end
