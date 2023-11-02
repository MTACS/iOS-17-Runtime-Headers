
@interface LSApplicationIdentityEnumerator : LSEnumerator {
    NSError * _ctxError;
    LSApplicationRecord * _currentRecord;
    NSEnumerator * _currentRecordIdentitiesEnumerator;
    _LSApplicationRecordEnumerator * _recordEnumerator;
}

- (void).cxx_destruct;
- (id)initWithAppEnumerationOptions:(unsigned long long)arg1;
- (id)nextObject;

@end
