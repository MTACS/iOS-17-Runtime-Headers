
@interface GDKnosisExecStep : NSObject <NSSecureCoding> {
    NSString * _indexQuery;
    NSString * _kgQueryNode;
    NSArray * _messages;
}

@property (nonatomic, readonly, copy) NSString *indexQuery;
@property (nonatomic, readonly, copy) NSString *kgQueryNode;
@property (nonatomic, readonly, copy) NSArray *messages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)indexQuery;
- (id)initWithCoder:(id)arg1;
- (id)initWithKgQueryNode:(id)arg1 indexQuery:(id)arg2 messages:(id)arg3;
- (id)kgQueryNode;
- (id)messages;

@end
