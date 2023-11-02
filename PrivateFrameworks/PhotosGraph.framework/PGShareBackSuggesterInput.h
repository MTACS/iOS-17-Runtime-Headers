
@interface PGShareBackSuggesterInput : NSObject <PGShareBackSuggesterInputProtocol> {
    NSDate * _creationDate;
    double  _horizontalAccuracy;
    double  _latitude;
    NSString * _localIdentifier;
    double  _longitude;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)localDateIntervalForSuggesterInputs:(id)arg1 withTimeIntervalPadding:(double)arg2;
+ (id)suggesterInputsWithDictionaries:(id)arg1;
+ (id)universalDateIntervalForSuggesterInputs:(id)arg1 withTimeIntervalPadding:(double)arg2;

- (void).cxx_destruct;
- (id)asset;
- (id)creationDate;
- (double)horizontalAccuracy;
- (id)initWithDictionary:(id)arg1;
- (double)latitude;
- (id)localCreationDate;
- (id)localIdentifier;
- (id)location;
- (double)longitude;
- (id)timeZone;

@end
