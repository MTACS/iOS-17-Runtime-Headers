
@protocol ICCRDataType <NSObject>

@required

- (<ICCRDataType> *)deltaSince:(ICCRVectorTimestamp *)arg1 in:(ICCRDocument *)arg2;
- (void)mergeWith:(id <ICCRDataType>)arg1;
- (void)realizeLocalChangesIn:(ICCRDocument *)arg1;
- (void)setDocument:(ICCRDocument *)arg1;
- (id)tombstone;
- (void)walkGraph:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*

@end
