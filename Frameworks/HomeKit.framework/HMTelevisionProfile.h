
@interface HMTelevisionProfile : HMAccessoryProfile <_HMTelevisionProfileDelegate> {
    <HMTelevisionProfileDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMTelevisionProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *mediaSourceDisplayOrder;
@property (readonly) bool mediaSourceDisplayOrderModifiable;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;
- (id)mediaSourceDisplayOrder;
- (bool)mediaSourceDisplayOrderModifiable;
- (bool)mergeFromNewObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)televisionProfileDidUpdateSourceDisplayOrder:(id)arg1;
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id /* block */)hf_mediaSourceComparator;
- (bool)hf_offersAutomation;

@end
