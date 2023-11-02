
@interface REMComplicationDataViewFetchModelInvocationResult : REMStoreInvocationResult {
    void accountStorages;
    void listStorages;
    void reminderStorages;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
