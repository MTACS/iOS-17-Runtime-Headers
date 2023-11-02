
@interface ATXShortcutsEditorEventMetadata : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    ATXPBShortcutsEditorEventMetadata * _proto;
}

@property (nonatomic) unsigned long long numStepsInShortcut;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumStepsInShortcut:(unsigned long long)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXShortcutsEditorEventMetadata:(id)arg1;
- (id)jsonDict;
- (unsigned long long)numStepsInShortcut;
- (id)proto;
- (void)setNumStepsInShortcut:(unsigned long long)arg1;

@end
