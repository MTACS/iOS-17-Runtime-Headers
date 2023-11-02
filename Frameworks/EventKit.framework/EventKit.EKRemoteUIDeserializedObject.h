
@interface EventKit.EKRemoteUIDeserializedObject : NSObject {
    void deserializedObject;
    void tempObjectIDMap;
}

@property (nonatomic, readonly) EKObject *deserializedObject;
@property (nonatomic, readonly) NSDictionary *tempObjectIDMap;

- (void).cxx_destruct;
- (id)deserializedObject;
- (id)init;
- (id)tempObjectIDMap;

@end
