
@interface ICTextAttachmentLocationCache : NSObject {
    Class  _cachedTextAttachmentType;
    ICLayoutManager * _layoutManager;
    NSMutableDictionary * _locationByTextAttachmentIdentifier;
    unsigned long long  _previousScanHaltLocation;
}

@property (nonatomic, retain) Class cachedTextAttachmentType;
@property (nonatomic) ICLayoutManager *layoutManager;
@property (nonatomic, readonly) NSMutableDictionary *locationByTextAttachmentIdentifier;
@property (nonatomic) unsigned long long previousScanHaltLocation;

- (void).cxx_destruct;
- (Class)cachedTextAttachmentType;
- (void)clear;
- (void)enumerateTextAttachmentsInRangeUsingBlock:(id /* block */)arg1;
- (void)enumerateTextAttachmentsInRangeWithFirstEnumerateRangeResult:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 secondEnumerateRangeResult:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 usingBlock:(id /* block */)arg3;
- (void)forgetLocationForViewIdentifier:(id)arg1;
- (id)initWithLayoutManager:(id)arg1 cachedTextAttachmentType:(Class)arg2;
- (id)layoutManager;
- (id)locationByTextAttachmentIdentifier;
- (unsigned long long)locationForTextAttachmentOfViewIdentifier:(id)arg1;
- (unsigned long long)locationForTextAttachmentOfViewIdentifier:(id)arg1 keyExistsBeforeEnumeration:(bool*)arg2 validationSuccessful:(bool*)arg3 stepsOfEnumeration:(unsigned long long*)arg4;
- (unsigned long long)nextLocationForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)previousScanHaltLocation;
- (void)setCachedTextAttachmentType:(Class)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setLocation:(unsigned long long)arg1 forTextAttachmentOfViewIdentifier:(id)arg2;
- (void)setPreviousScanHaltLocation:(unsigned long long)arg1;
- (bool)validateLocation:(unsigned long long)arg1 againstViewIdentifier:(id)arg2;

@end
