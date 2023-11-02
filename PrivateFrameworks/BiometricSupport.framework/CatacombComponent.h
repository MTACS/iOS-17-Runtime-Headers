
@interface CatacombComponent : NSObject <NSCopying> {
    struct { 
        unsigned int userID; 
        struct { 
            unsigned int type; 
            unsigned char uuid[16]; 
        } group; 
    }  _component;
}

@property (nonatomic, readonly) struct { unsigned int x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2[16]; } x2; }*component;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned char x2[16]; }*group;
@property (nonatomic, readonly) unsigned int userID;

+ (id)component:(struct { unsigned int x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2[16]; } x2; }*)arg1;
+ (id)componentForUserID:(unsigned int)arg1;
+ (id)masterComponent;

- (struct { unsigned int x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2[16]; } x2; }*)component;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct { unsigned int x1; unsigned char x2[16]; }*)group;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponent:(id)arg1;
- (bool)isGroupComponent;
- (bool)isMasterComponent;
- (bool)isUserComponent;
- (unsigned int)userID;

@end
