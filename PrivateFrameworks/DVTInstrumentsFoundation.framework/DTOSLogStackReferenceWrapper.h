
@interface DTOSLogStackReferenceWrapper : NSObject {
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  content;
}

- (id).cxx_construct;

@end
