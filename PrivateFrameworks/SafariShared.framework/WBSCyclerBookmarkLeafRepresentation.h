
@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerItemLeafRepresentation {
    NSURL * _url;
}

@property (setter=setURL:, nonatomic, retain) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithURL:(id)arg1 title:(id)arg2 uniqueIdentifier:(id)arg3;
- (bool)isEquivalent:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end
