
@interface SiriKitRuntime.ConversationalContextContainer : NSObject <AFContextSnapshot, NSSecureCoding> {
    void activeTasks;
    void entities;
    void executedTasks;
    void systemDialogActs;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

@end
