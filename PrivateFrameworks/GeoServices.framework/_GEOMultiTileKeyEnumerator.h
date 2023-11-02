
@interface _GEOMultiTileKeyEnumerator : NSObject <GEOTileKeyEnumerator> {
    unsigned int  _currentEnumeratorIndex;
    NSArray * _enumerators;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)continueEnumeratingTileKeysWithBlock:(id /* block */)arg1;
- (unsigned long long)count;
- (id)initWithEnumerators:(id)arg1;

@end
