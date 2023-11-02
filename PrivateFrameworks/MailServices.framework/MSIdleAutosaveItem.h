
@interface MSIdleAutosaveItem : NSObject <NSSecureCoding> {
    NSString * _autosaveIdentifier;
    NSString * _subject;
}

@property (nonatomic, readonly, copy) NSString *autosaveIdentifier;
@property (nonatomic, readonly, copy) NSString *subject;

+ (bool)supportsSecureCoding;
+ (id)withAutosaveIdentifier:(id)arg1 subject:(id)arg2;

- (void).cxx_destruct;
- (id)autosaveIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAutosaveIdentifier:(id)arg1 subject:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)subject;

@end
