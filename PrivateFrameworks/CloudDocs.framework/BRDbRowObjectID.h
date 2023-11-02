
@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long  _rowId;
    unsigned char  _type;
}

+ (bool)supportsSecureCoding;

- (id)asString;
- (id)description;
- (id)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (id)initWithCoder:(id)arg1;
- (id)initWithRowID:(unsigned long long)arg1 type:(unsigned char)arg2;
- (bool)isFpfsItem;
- (id)itemDBRowID;
- (unsigned long long)rawID;
- (unsigned char)type;

@end
