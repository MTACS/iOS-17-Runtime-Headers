
@interface SGContactPipelineHelper : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _helperLock;
    NSDictionary * _lengthsCounts;
    NSString * _mostCommonCountryCode;
    unsigned long long  _phonesSeenInContacts;
}

+ (id)findContactsForDetailType:(unsigned long long)arg1 andValue:(id)arg2;
+ (id)findContactsForPerson:(id)arg1 fetchingKeys:(id)arg2;
+ (id)normalizedDigits:(id)arg1;
+ (bool)personExistsInContacts:(id)arg1 name:(id)arg2 handle:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)numberMatchesContactsForm:(id)arg1;
- (bool)numberMatchesContactsForm:(id)arg1 amongContactsWithIdentifiers:(id)arg2;

@end
