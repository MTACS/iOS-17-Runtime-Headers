
@interface CTNetworkSelectionInfo : NSObject <NSCopying, NSSecureCoding> {
    CTNetwork * _selection;
    unsigned long long  _selectionMode;
    unsigned long long  _selectionState;
}

@property (nonatomic, retain) CTNetwork *selection;
@property (nonatomic) unsigned long long selectionMode;
@property (nonatomic) unsigned long long selectionState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)selection;
- (unsigned long long)selectionMode;
- (unsigned long long)selectionState;
- (void)setSelection:(id)arg1;
- (void)setSelectionMode:(unsigned long long)arg1;
- (void)setSelectionState:(unsigned long long)arg1;

@end
