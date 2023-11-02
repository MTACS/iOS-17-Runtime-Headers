
@interface HFDemoModeFaceRecognitionDataSource : NSObject {
    NSArray * _knownToHouseholdEntries;
    NSArray * _recentsEntries;
}

@property (nonatomic, retain) NSArray *knownToHouseholdEntries;
@property (nonatomic, retain) NSArray *recentsEntries;

- (void).cxx_destruct;
- (id)arrayFromPlistArray:(id)arg1;
- (id)init;
- (id)knownToHouseholdEntries;
- (id)recentsEntries;
- (void)setKnownToHouseholdEntries:(id)arg1;
- (void)setRecentsEntries:(id)arg1;

@end
