
@interface SFAccessControlEntry_Ivars : NSObject {
    struct { 
        unsigned int isOwner : 1; 
        unsigned int canRead : 1; 
        unsigned int canWrite : 1; 
    }  accessControlEntryFlags;
    NSString * bundleID;
}

- (void).cxx_destruct;

@end
