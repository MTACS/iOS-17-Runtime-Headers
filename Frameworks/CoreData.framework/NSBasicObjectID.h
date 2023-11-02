
@interface NSBasicObjectID : _NSCoreManagedObjectID {
    int  _cd_rc;
    id  _referenceData;
}

+ (char *)generatedNameSuffix;

- (id)_referenceData;
- (id)_retainedURIString;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end
