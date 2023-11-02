
@interface EDAMNoteLimits : FATObject {
    NSNumber * _noteResourceCountMax;
    NSNumber * _noteSizeMax;
    NSNumber * _resourceSizeMax;
    NSNumber * _uploadLimit;
    NSNumber * _uploaded;
}

@property (nonatomic, retain) NSNumber *noteResourceCountMax;
@property (nonatomic, retain) NSNumber *noteSizeMax;
@property (nonatomic, retain) NSNumber *resourceSizeMax;
@property (nonatomic, retain) NSNumber *uploadLimit;
@property (nonatomic, retain) NSNumber *uploaded;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)noteResourceCountMax;
- (id)noteSizeMax;
- (id)resourceSizeMax;
- (void)setNoteResourceCountMax:(id)arg1;
- (void)setNoteSizeMax:(id)arg1;
- (void)setResourceSizeMax:(id)arg1;
- (void)setUploadLimit:(id)arg1;
- (void)setUploaded:(id)arg1;
- (id)uploadLimit;
- (id)uploaded;

@end
