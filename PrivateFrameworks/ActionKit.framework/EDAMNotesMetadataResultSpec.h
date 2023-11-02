
@interface EDAMNotesMetadataResultSpec : FATObject {
    NSNumber * _includeAttributes;
    NSNumber * _includeContentLength;
    NSNumber * _includeCreated;
    NSNumber * _includeDeleted;
    NSNumber * _includeLargestResourceMime;
    NSNumber * _includeLargestResourceSize;
    NSNumber * _includeNotebookGuid;
    NSNumber * _includeTagGuids;
    NSNumber * _includeTitle;
    NSNumber * _includeUpdateSequenceNum;
    NSNumber * _includeUpdated;
}

@property (nonatomic, retain) NSNumber *includeAttributes;
@property (nonatomic, retain) NSNumber *includeContentLength;
@property (nonatomic, retain) NSNumber *includeCreated;
@property (nonatomic, retain) NSNumber *includeDeleted;
@property (nonatomic, retain) NSNumber *includeLargestResourceMime;
@property (nonatomic, retain) NSNumber *includeLargestResourceSize;
@property (nonatomic, retain) NSNumber *includeNotebookGuid;
@property (nonatomic, retain) NSNumber *includeTagGuids;
@property (nonatomic, retain) NSNumber *includeTitle;
@property (nonatomic, retain) NSNumber *includeUpdateSequenceNum;
@property (nonatomic, retain) NSNumber *includeUpdated;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)includeAttributes;
- (id)includeContentLength;
- (id)includeCreated;
- (id)includeDeleted;
- (id)includeLargestResourceMime;
- (id)includeLargestResourceSize;
- (id)includeNotebookGuid;
- (id)includeTagGuids;
- (id)includeTitle;
- (id)includeUpdateSequenceNum;
- (id)includeUpdated;
- (void)setIncludeAttributes:(id)arg1;
- (void)setIncludeContentLength:(id)arg1;
- (void)setIncludeCreated:(id)arg1;
- (void)setIncludeDeleted:(id)arg1;
- (void)setIncludeLargestResourceMime:(id)arg1;
- (void)setIncludeLargestResourceSize:(id)arg1;
- (void)setIncludeNotebookGuid:(id)arg1;
- (void)setIncludeTagGuids:(id)arg1;
- (void)setIncludeTitle:(id)arg1;
- (void)setIncludeUpdateSequenceNum:(id)arg1;
- (void)setIncludeUpdated:(id)arg1;

@end
