
@protocol NTKEnumeratableFaceCollection <NSObject>

@required

- (void)enumerateFaceNamesUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (NTKFace *)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfFace:(NTKFace *)arg1;
- (unsigned long long)numberOfFaces;

@end
