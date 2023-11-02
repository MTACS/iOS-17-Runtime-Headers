
@protocol CRDataType <NSObject>

@required

- (<CRDataType> *)deltaSince:(CRVectorTimestamp *)arg1 in:(CRDocument *)arg2;
- (void)mergeWith:(id <CRDataType>)arg1;
- (void)realizeLocalChangesIn:(CRDocument *)arg1;
- (void)setDocument:(CRDocument *)arg1;
- (id)tombstone;
- (void)walkGraph:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*

@end
