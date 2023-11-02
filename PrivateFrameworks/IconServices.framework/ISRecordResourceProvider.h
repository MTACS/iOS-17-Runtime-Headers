
@interface ISRecordResourceProvider : ISResourceProvider {
    NSString * _fileExtension;
    LSRecord * _record;
    NSString * _templateType;
}

@property (readonly) NSString *fileExtension;
@property (readonly) LSRecord *record;
@property (retain) NSString *templateType;

- (void).cxx_destruct;
- (bool)_isAppleResource;
- (id)description;
- (id)fileExtension;
- (id)iconResource;
- (id)initWithRecord:(id)arg1 fileExtension:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithRecord:(id)arg1 options:(unsigned long long)arg2;
- (id)record;
- (void)resolveResources;
- (id)resourceNamed:(id)arg1;
- (void)setPlatformWithBundle:(id)arg1;
- (void)setTemplateType:(id)arg1;
- (id)symbol;
- (id)templateIconResource;
- (id)templateType;

@end
