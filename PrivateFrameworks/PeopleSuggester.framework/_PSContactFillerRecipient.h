
@interface _PSContactFillerRecipient : NSObject {
    NSString * _ID;
    _CDInteraction * _interaction;
}

@property (copy) NSString *ID;
@property (copy) _CDInteraction *interaction;

- (void).cxx_destruct;
- (id)ID;
- (id)init;
- (id)interaction;
- (void)setID:(id)arg1;
- (void)setInteraction:(id)arg1;

@end
