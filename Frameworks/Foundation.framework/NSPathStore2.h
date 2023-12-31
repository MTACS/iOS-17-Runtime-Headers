
@interface NSPathStore2 : NSString {
    unsigned short  _characters;
    unsigned int  _lengthAndRefCount;
}

+ (id)pathStoreWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (id)pathWithComponents:(id)arg1;

- (const unsigned short*)_fastCharacterContents;
- (id)_stringByResolvingSymlinksInPathUsingCache:(bool)arg1;
- (id)_stringByStandardizingPathUsingCache:(bool)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (bool)isAbsolutePath;
- (bool)isEqualToString:(id)arg1;
- (id)lastPathComponent;
- (unsigned long long)length;
- (id)pathComponents;
- (id)pathExtension;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByStandardizingPath;

@end
