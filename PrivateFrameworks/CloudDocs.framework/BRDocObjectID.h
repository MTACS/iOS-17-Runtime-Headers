
@interface BRDocObjectID : BRFileObjectID {
    unsigned int  _docID;
}

+ (bool)supportsSecureCoding;

- (id)asString;
- (id)description;
- (id)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocID:(unsigned int)arg1;
- (id)initWithDocIDNumber:(id)arg1;
- (bool)isDocumentID;
- (bool)isFpfsItem;
- (unsigned long long)rawID;
- (unsigned char)type;

@end
