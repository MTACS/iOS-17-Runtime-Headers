
@interface DDUIInfoPlist : NSObject {
    NSDictionary * _advertisesByIdentifier;
    NSDictionary * _browsesByIdentifier;
}

@property (nonatomic, retain) NSDictionary *advertisesByIdentifier;
@property (nonatomic, retain) NSDictionary *browsesByIdentifier;

- (void).cxx_destruct;
- (id)advertisesByIdentifier;
- (id)browsesByIdentifier;
- (id)description;
- (void)setAdvertisesByIdentifier:(id)arg1;
- (void)setBrowsesByIdentifier:(id)arg1;

@end
