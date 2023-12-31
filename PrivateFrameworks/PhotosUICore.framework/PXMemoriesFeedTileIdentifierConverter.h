
@interface PXMemoriesFeedTileIdentifierConverter : PXSectionedTileIdentifierConverter

- (bool)_shouldConvertIdentifierFromMemory:(id)arg1 toMemory:(id)arg2;
- (bool)_shouldConvertIdentifierFromMemoryInfo:(id)arg1 toMemoryInfo:(id)arg2;
- (bool)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1;
- (bool)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(unsigned long long*)arg2;

@end
