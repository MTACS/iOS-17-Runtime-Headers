
@interface GEOEditionEntry : NSObject {
    unsigned int  _edition;
    bool  _invalidateOnly;
    unsigned int  _provider;
    union { 
        unsigned int value; 
        struct { 
            unsigned int type : 8; 
            union { 
                struct { 
                    unsigned int style : 14; 
                    unsigned int size : 4; 
                    unsigned int scale : 4; 
                    unsigned int padding : 2; 
                } standard; 
                struct { 
                    unsigned int style : 8; 
                    unsigned int region : 16; 
                } flyoverRegion; 
            } ; 
        } structured; 
    }  _tileset;
}

@property (nonatomic) unsigned int edition;
@property (nonatomic) bool invalidateOnly;
@property (nonatomic) unsigned int provider;
@property (nonatomic) union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; } tileset;

- (unsigned int)edition;
- (bool)invalidateOnly;
- (unsigned int)provider;
- (void)setEdition:(unsigned int)arg1;
- (void)setInvalidateOnly:(bool)arg1;
- (void)setProvider:(unsigned int)arg1;
- (void)setTileset:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg1;
- (union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })tileset;

@end
