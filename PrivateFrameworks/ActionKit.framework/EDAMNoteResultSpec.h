
@interface EDAMNoteResultSpec : FATObject {
    NSNumber * _includeAccountLimits;
    NSNumber * _includeContent;
    NSNumber * _includeNoteAppDataValues;
    NSNumber * _includeResourceAppDataValues;
    NSNumber * _includeResourcesAlternateData;
    NSNumber * _includeResourcesData;
    NSNumber * _includeResourcesRecognition;
    NSNumber * _includeSharedNotes;
}

@property (nonatomic, retain) NSNumber *includeAccountLimits;
@property (nonatomic, retain) NSNumber *includeContent;
@property (nonatomic, retain) NSNumber *includeNoteAppDataValues;
@property (nonatomic, retain) NSNumber *includeResourceAppDataValues;
@property (nonatomic, retain) NSNumber *includeResourcesAlternateData;
@property (nonatomic, retain) NSNumber *includeResourcesData;
@property (nonatomic, retain) NSNumber *includeResourcesRecognition;
@property (nonatomic, retain) NSNumber *includeSharedNotes;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)includeAccountLimits;
- (id)includeContent;
- (id)includeNoteAppDataValues;
- (id)includeResourceAppDataValues;
- (id)includeResourcesAlternateData;
- (id)includeResourcesData;
- (id)includeResourcesRecognition;
- (id)includeSharedNotes;
- (void)setIncludeAccountLimits:(id)arg1;
- (void)setIncludeContent:(id)arg1;
- (void)setIncludeNoteAppDataValues:(id)arg1;
- (void)setIncludeResourceAppDataValues:(id)arg1;
- (void)setIncludeResourcesAlternateData:(id)arg1;
- (void)setIncludeResourcesData:(id)arg1;
- (void)setIncludeResourcesRecognition:(id)arg1;
- (void)setIncludeSharedNotes:(id)arg1;

@end
