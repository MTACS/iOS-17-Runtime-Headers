
@interface BlastDoorMorphology : NSObject {
    void morphology;
}

@property (nonatomic, readonly) NSArray *customPronouns;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long grammaticalGender;
@property (nonatomic, readonly) long long number;
@property (nonatomic, readonly) long long partOfSpeech;

- (void).cxx_destruct;
- (id)customPronouns;
- (id)description;
- (long long)grammaticalGender;
- (id)init;
- (long long)number;
- (long long)partOfSpeech;

@end
