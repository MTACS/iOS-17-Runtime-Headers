
@interface WBSOfflineSearchRemoteDisablementSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary * _disablementDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isCurrentSafariVersionDisabled:(id)arg1;
- (bool)areOfflineSearchSuggestionsDisabledRemotelyForSearchProvider:(id)arg1;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (id)plistDataWithFormat:(unsigned long long)arg1;

@end
