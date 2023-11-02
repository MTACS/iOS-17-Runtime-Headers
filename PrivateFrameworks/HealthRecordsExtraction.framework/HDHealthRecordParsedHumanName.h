
@interface HDHealthRecordParsedHumanName : NSObject {
    NSString * _family;
    NSArray * _given;
    HKMedicalDateInterval * _period;
    NSArray * _prefix;
    NSArray * _suffix;
    NSString * _text;
    NSString * _use;
}

@property (nonatomic, readonly, copy) NSString *family;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, readonly, copy) NSArray *given;
@property (nonatomic, readonly, copy) HKMedicalDateInterval *period;
@property (nonatomic, readonly, copy) NSArray *prefix;
@property (nonatomic, readonly, copy) NSArray *suffix;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly, copy) NSString *use;

+ (id)parsedNamesWithHumanNames:(id)arg1 FHIRVersion:(id)arg2 error:(id*)arg3;
+ (id)preferredNameInNames:(id)arg1 FHIRVersion:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)family;
- (id)fullName;
- (id)given;
- (id)initWithHumanNameDictionary:(id)arg1 FHIRVersion:(id)arg2 error:(id*)arg3;
- (id)period;
- (id)prefix;
- (id)suffix;
- (id)text;
- (id)use;

@end
