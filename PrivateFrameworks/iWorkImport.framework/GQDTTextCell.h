
@interface GQDTTextCell : GQDTCell {
    GQDWPLayoutStorage * mLayoutStorage;
    struct __CFString { } * mStringValue;
}

- (void)dealloc;
- (id)layoutStorage;
- (int)readContentForTCell:(struct _xmlTextReader { }*)arg1;
- (int)readContentForTextCell:(struct _xmlTextReader { }*)arg1;
- (struct __CFString { }*)stringValue;

@end
