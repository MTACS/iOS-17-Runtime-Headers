
@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long  _ino;
}

+ (bool)supportsSecureCoding;

- (id)asString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1;
- (bool)isFolderOrAliasID;
- (bool)isFpfsItem;
- (unsigned long long)rawID;
- (unsigned char)type;

@end
