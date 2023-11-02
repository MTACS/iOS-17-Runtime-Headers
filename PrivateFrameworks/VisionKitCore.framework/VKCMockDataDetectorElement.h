
@interface VKCMockDataDetectorElement : VKCTextDataDetectorElement {
    NSArray * _boundingQuads;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    unsigned long long  _dataDetectorTypes;
}

- (void).cxx_destruct;
- (id)boundingQuads;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (unsigned long long)dataDetectorTypes;
- (id)initWithDictionary:(id)arg1;

@end
